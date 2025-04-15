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
	struct ImageOptions {
		bool currentOSNVMeSupported;
	};
	struct AdditionalInfo {
		std::string pvdConfig;
		bool enableHighDensityMode;
	};
	struct CpuOptions {
		bool enableVRDT;
		bool enableVISST;
		std::string turboMode;
	};
	struct PrivateDnsNameOptions {
		std::string hostnameType;
		bool enableInstanceIdDnsARecord;
		bool enableInstanceIdDnsAAAARecord;
		bool enableIpDnsARecord;
		bool enableIpDnsPtrRecord;
	};
	struct RemoteConnectionOptions {
		std::string password;
		std::string type;
	};
	ModifyInstanceAttributeRequest();
	~ModifyInstanceAttributeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	bool getEnableNVS() const;
	void setEnableNVS(bool enableNVS);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	std::string getCpuOptionsTopologyType() const;
	void setCpuOptionsTopologyType(const std::string &cpuOptionsTopologyType);
	ImageOptions getImageOptions() const;
	void setImageOptions(const ImageOptions &imageOptions);
	std::string getOSNameEn() const;
	void setOSNameEn(const std::string &oSNameEn);
	int getCpuOptionsCore() const;
	void setCpuOptionsCore(int cpuOptionsCore);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	AdditionalInfo getAdditionalInfo() const;
	void setAdditionalInfo(const AdditionalInfo &additionalInfo);
	CpuOptions getCpuOptions() const;
	void setCpuOptions(const CpuOptions &cpuOptions);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	bool getRecyclable() const;
	void setRecyclable(bool recyclable);
	int getNetworkInterfaceQueueNumber() const;
	void setNetworkInterfaceQueueNumber(int networkInterfaceQueueNumber);
	bool getEnableNetworkEncryption() const;
	void setEnableNetworkEncryption(bool enableNetworkEncryption);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getCpuOptionsThreadsPerCore() const;
	void setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	PrivateDnsNameOptions getPrivateDnsNameOptions() const;
	void setPrivateDnsNameOptions(const PrivateDnsNameOptions &privateDnsNameOptions);
	bool getEnableJumboFrame() const;
	void setEnableJumboFrame(bool enableJumboFrame);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getCreditSpecification() const;
	void setCreditSpecification(const std::string &creditSpecification);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	RemoteConnectionOptions getRemoteConnectionOptions() const;
	void setRemoteConnectionOptions(const RemoteConnectionOptions &remoteConnectionOptions);

private:
	long resourceOwnerId_;
	bool deletionProtection_;
	bool enableNVS_;
	std::string password_;
	std::string hostName_;
	std::string cpuOptionsTopologyType_;
	ImageOptions imageOptions_;
	std::string oSNameEn_;
	int cpuOptionsCore_;
	long ownerId_;
	AdditionalInfo additionalInfo_;
	CpuOptions cpuOptions_;
	std::string instanceId_;
	std::string instanceName_;
	bool recyclable_;
	int networkInterfaceQueueNumber_;
	bool enableNetworkEncryption_;
	std::string description_;
	int cpuOptionsThreadsPerCore_;
	std::string userData_;
	PrivateDnsNameOptions privateDnsNameOptions_;
	bool enableJumboFrame_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string creditSpecification_;
	std::vector<std::string> securityGroupIds_;
	RemoteConnectionOptions remoteConnectionOptions_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_
