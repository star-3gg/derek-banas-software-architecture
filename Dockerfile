
FROM alpine:3.16

# Match IDs to local
ARG UID=1000
ARG GID=1000

# Install build essentials and cmake
RUN apk add --no-cache \
  build-base \
  cmake

# Create a new group and user with the specified GID and UID
RUN addgroup -g ${GID} appgroup && \
  adduser -D -u ${UID} -G appgroup appuser

# Set ownership and permissions for the /app directory
RUN mkdir /app && \
  chown appuser:appgroup /app && \
  chmod 755 /app

# Switch to the new user
USER appuser:appgroup

# Set the working directory to /app
WORKDIR /app

