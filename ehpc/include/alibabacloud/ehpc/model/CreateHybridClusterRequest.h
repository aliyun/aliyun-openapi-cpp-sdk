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

#ifndef ALIBABACLOUD_EHPC_MODEL_CREATEHYBRIDCLUSTERREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_CREATEHYBRIDCLUSTERREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT CreateHybridClusterRequest : public RpcServiceRequest {
public:
	struct WinAdPar {
		std::string adUser;
		std::string adUserPasswd;
		std::string adIp;
		std::string adDc;
	};
	struct PostInstallScript {
		std::string args;
		std::string url;
	};
	struct OpenldapPar {
		std::string fallbackHomeDir;
		std::string baseDn;
		std::string ldapServerIp;
	};
	struct Nodes {
		std::string ipAddress;
		std::string hostName;
		std::string role;
		std::string schedulerType;
		std::string accountType;
		std::string dir;
	};
	struct Application {
		std::string tag;
	};
	CreateHybridClusterRequest();
	~CreateHybridClusterRequest();
	std::string getEcsOrderManagerInstanceType() const;
	void setEcsOrderManagerInstanceType(const std::string &ecsOrderManagerInstanceType);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	bool getMultiOs() const;
	void setMultiOs(bool multiOs);
	std::string getSecurityGroupName() const;
	void setSecurityGroupName(const std::string &securityGroupName);
	std::string getOnPremiseVolumeRemotePath() const;
	void setOnPremiseVolumeRemotePath(const std::string &onPremiseVolumeRemotePath);
	std::string getImageOwnerAlias() const;
	void setImageOwnerAlias(const std::string &imageOwnerAlias);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getHybridClusterOpMode() const;
	void setHybridClusterOpMode(const std::string &hybridClusterOpMode);
	WinAdPar getWinAdPar() const;
	void setWinAdPar(const WinAdPar &winAdPar);
	float getComputeSpotPriceLimit() const;
	void setComputeSpotPriceLimit(float computeSpotPriceLimit);
	std::string getOnPremiseVolumeLocalPath() const;
	void setOnPremiseVolumeLocalPath(const std::string &onPremiseVolumeLocalPath);
	std::string getRemoteDirectory() const;
	void setRemoteDirectory(const std::string &remoteDirectory);
	std::string getComputeSpotStrategy() const;
	void setComputeSpotStrategy(const std::string &computeSpotStrategy);
	std::vector<PostInstallScript> getPostInstallScript() const;
	void setPostInstallScript(const std::vector<PostInstallScript> &postInstallScript);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getVolumeId() const;
	void setVolumeId(const std::string &volumeId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getEhpcVersion() const;
	void setEhpcVersion(const std::string &ehpcVersion);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getEcsOrderComputeInstanceType() const;
	void setEcsOrderComputeInstanceType(const std::string &ecsOrderComputeInstanceType);
	OpenldapPar getOpenldapPar() const;
	void setOpenldapPar(const OpenldapPar &openldapPar);
	std::string getJobQueue() const;
	void setJobQueue(const std::string &jobQueue);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getVolumeType() const;
	void setVolumeType(const std::string &volumeType);
	std::string getOnPremiseVolumeMountPoint() const;
	void setOnPremiseVolumeMountPoint(const std::string &onPremiseVolumeMountPoint);
	std::string getOnPremiseVolumeProtocol() const;
	void setOnPremiseVolumeProtocol(const std::string &onPremiseVolumeProtocol);
	std::string getVolumeProtocol() const;
	void setVolumeProtocol(const std::string &volumeProtocol);
	std::string getClientVersion() const;
	void setClientVersion(const std::string &clientVersion);
	std::string getOsTag() const;
	void setOsTag(const std::string &osTag);
	std::vector<Nodes> getNodes() const;
	void setNodes(const std::vector<Nodes> &nodes);
	std::string getPlugin() const;
	void setPlugin(const std::string &plugin);
	std::vector<Application> getApplication() const;
	void setApplication(const std::vector<Application> &application);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getVolumeMountpoint() const;
	void setVolumeMountpoint(const std::string &volumeMountpoint);
	bool getSchedulerPreInstall() const;
	void setSchedulerPreInstall(bool schedulerPreInstall);
	std::string getLocation() const;
	void setLocation(const std::string &location);

private:
	std::string ecsOrderManagerInstanceType_;
	std::string keyPairName_;
	bool multiOs_;
	std::string securityGroupName_;
	std::string onPremiseVolumeRemotePath_;
	std::string imageOwnerAlias_;
	std::string resourceGroupId_;
	std::string password_;
	std::string hybridClusterOpMode_;
	WinAdPar winAdPar_;
	float computeSpotPriceLimit_;
	std::string onPremiseVolumeLocalPath_;
	std::string remoteDirectory_;
	std::string computeSpotStrategy_;
	std::vector<PostInstallScript> postInstallScript_;
	std::string vSwitchId_;
	std::string domain_;
	std::string name_;
	std::string volumeId_;
	std::string zoneId_;
	std::string imageId_;
	std::string clientToken_;
	std::string ehpcVersion_;
	std::string securityGroupId_;
	std::string description_;
	std::string ecsOrderComputeInstanceType_;
	OpenldapPar openldapPar_;
	std::string jobQueue_;
	std::string accessKeyId_;
	std::string volumeType_;
	std::string onPremiseVolumeMountPoint_;
	std::string onPremiseVolumeProtocol_;
	std::string volumeProtocol_;
	std::string clientVersion_;
	std::string osTag_;
	std::vector<Nodes> nodes_;
	std::string plugin_;
	std::vector<Application> application_;
	std::string vpcId_;
	std::string volumeMountpoint_;
	bool schedulerPreInstall_;
	std::string location_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_CREATEHYBRIDCLUSTERREQUEST_H_
