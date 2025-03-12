/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyInstanceAttributeRequest : public RpcServiceRequest {
public:
	struct PrivateDnsNameOptions {
		std::string hostnameType;
		bool enableInstanceIdDnsARecord;
		bool enableInstanceIdDnsAAAARecord;
		bool enableIpDnsARecord;
		bool enableIpDnsPtrRecord;
	};
	struct ImageOptions {
		bool currentOSNVMeSupported;
	};
	struct AdditionalInfo {
		std::string pvdConfig;
		bool enableHighDensityMode;
	};
	struct RemoteConnectionOptions {
		std::string password;
		std::string type;
	};
	ModifyInstanceAttributeRequest();
	~ModifyInstanceAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getRecyclable() const;
	void setRecyclable(bool recyclable);
	int getNetworkInterfaceQueueNumber() const;
	void setNetworkInterfaceQueueNumber(int networkInterfaceQueueNumber);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getCpuOptionsThreadsPerCore() const;
	void setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	PrivateDnsNameOptions getPrivateDnsNameOptions() const;
	void setPrivateDnsNameOptions(const PrivateDnsNameOptions &privateDnsNameOptions);
	std::string getCpuOptionsTopologyType() const;
	void setCpuOptionsTopologyType(const std::string &cpuOptionsTopologyType);
	ImageOptions getImageOptions() const;
	void setImageOptions(const ImageOptions &imageOptions);
	std::string getOSNameEn() const;
	void setOSNameEn(const std::string &oSNameEn);
	bool getEnableJumboFrame() const;
	void setEnableJumboFrame(bool enableJumboFrame);
	int getCpuOptionsCore() const;
	void setCpuOptionsCore(int cpuOptionsCore);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getCreditSpecification() const;
	void setCreditSpecification(const std::string &creditSpecification);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	AdditionalInfo getAdditionalInfo() const;
	void setAdditionalInfo(const AdditionalInfo &additionalInfo);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	RemoteConnectionOptions getRemoteConnectionOptions() const;
	void setRemoteConnectionOptions(const RemoteConnectionOptions &remoteConnectionOptions);

private:
	long resourceOwnerId_;
	bool recyclable_;
	int networkInterfaceQueueNumber_;
	std::string description_;
	int cpuOptionsThreadsPerCore_;
	bool deletionProtection_;
	std::string userData_;
	std::string password_;
	std::string hostName_;
	PrivateDnsNameOptions privateDnsNameOptions_;
	std::string cpuOptionsTopologyType_;
	ImageOptions imageOptions_;
	std::string oSNameEn_;
	bool enableJumboFrame_;
	int cpuOptionsCore_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string creditSpecification_;
	long ownerId_;
	std::vector<std::string> securityGroupIds_;
	AdditionalInfo additionalInfo_;
	std::string instanceId_;
	std::string instanceName_;
	RemoteConnectionOptions remoteConnectionOptions_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_
