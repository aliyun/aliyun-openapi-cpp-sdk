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

#ifndef ALIBABACLOUD_EFLO_CONTROLLER_MODEL_CREATECLUSTERREQUEST_H_
#define ALIBABACLOUD_EFLO_CONTROLLER_MODEL_CREATECLUSTERREQUEST_H_

#include <alibabacloud/eflo-controller/Eflo_controllerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo_controller {
namespace Model {
class ALIBABACLOUD_EFLO_CONTROLLER_EXPORT CreateClusterRequest : public RpcServiceRequest {
public:
	struct Components {
		std::string componentType;
		struct ComponentConfig {
			ObjectOfAny basicArgs;
			ObjectOfAny objectOfAny;
			std::vector<ObjectOfAny> nodeUnits;
		};
		ComponentConfig componentConfig;
	};
	struct Networks {
		struct NewVpdInfo {
			std::string monitorVswitchId;
			struct VpdSubnetsItem {
				std::string subnetType;
				std::string zoneId;
				std::string subnetCidr;
			};
			VpdSubnetsItem vpdSubnetsItem;
			std::vector<VpdSubnetsItem> vpdSubnets;
			std::string cloudLinkId;
			std::string vpdCidr;
			std::string cloudLinkCidr;
			std::string cenId;
			std::string monitorVpcId;
		};
		NewVpdInfo newVpdInfo;
	};
	struct NodeGroups {
		std::string nodeGroupName;
		struct NodesItem {
			std::string hostname;
			std::string loginPassword;
			std::string nodeId;
		};
		NodesItem nodesItem;
		std::vector<NodesItem> nodes;
		std::string imageId;
		std::string nodeGroupDescription;
		std::string zoneId;
		std::string machineType;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateClusterRequest();
	~CreateClusterRequest();
	std::vector<Components> getComponents() const;
	void setComponents(const std::vector<Components> &components);
	std::string getClusterName() const;
	void setClusterName(const std::string &clusterName);
	Networks getNetworks() const;
	void setNetworks(const Networks &networks);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getClusterDescription() const;
	void setClusterDescription(const std::string &clusterDescription);
	std::vector<NodeGroups> getNodeGroups() const;
	void setNodeGroups(const std::vector<NodeGroups> &nodeGroups);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getIgnoreFailedNodeTasks() const;
	void setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks);
	std::string getClusterType() const;
	void setClusterType(const std::string &clusterType);

private:
	std::vector<Components> components_;
	std::string clusterName_;
	Networks networks_;
	std::string resourceGroupId_;
	std::string clusterDescription_;
	std::vector<NodeGroups> nodeGroups_;
	std::vector<Tag> tag_;
	bool ignoreFailedNodeTasks_;
	std::string clusterType_;
};
} // namespace Model
} // namespace Eflo_controller
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_CONTROLLER_MODEL_CREATECLUSTERREQUEST_H_
