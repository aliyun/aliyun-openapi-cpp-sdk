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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBESDGDEPLOYMENTSTATUSREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBESDGDEPLOYMENTSTATUSREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeSDGDeploymentStatusRequest : public RpcServiceRequest {
public:
	DescribeSDGDeploymentStatusRequest();
	~DescribeSDGDeploymentStatusRequest();
	std::vector<std::string> getRegionIds() const;
	void setRegionIds(const std::vector<std::string> &regionIds);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getDeploymentType() const;
	void setDeploymentType(const std::string &deploymentType);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getSDGId() const;
	void setSDGId(const std::string &sDGId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::vector<std::string> regionIds_;
	std::vector<std::string> instanceIds_;
	std::string status_;
	std::string deploymentType_;
	int pageNumber_;
	std::string sDGId_;
	int pageSize_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBESDGDEPLOYMENTSTATUSREQUEST_H_
