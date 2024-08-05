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

#ifndef ALIBABACLOUD_ARMS_MODEL_UPDATEPROMETHEUSGLOBALVIEWREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_UPDATEPROMETHEUSGLOBALVIEWREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT UpdatePrometheusGlobalViewRequest : public RpcServiceRequest {
public:
	UpdatePrometheusGlobalViewRequest();
	~UpdatePrometheusGlobalViewRequest();
	bool getAllSubClustersSuccess() const;
	void setAllSubClustersSuccess(bool allSubClustersSuccess);
	std::string getStsToken() const;
	void setStsToken(const std::string &stsToken);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getMostRegionId() const;
	void setMostRegionId(const std::string &mostRegionId);
	std::string getParamJson() const;
	void setParamJson(const std::string &paramJson);
	std::string getSubClustersJson() const;
	void setSubClustersJson(const std::string &subClustersJson);

private:
	bool allSubClustersSuccess_;
	std::string stsToken_;
	std::string clusterId_;
	std::string groupName_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string mostRegionId_;
	std::string paramJson_;
	std::string subClustersJson_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_UPDATEPROMETHEUSGLOBALVIEWREQUEST_H_
