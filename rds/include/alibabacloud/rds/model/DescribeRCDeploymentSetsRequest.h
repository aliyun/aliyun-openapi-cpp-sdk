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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCDEPLOYMENTSETSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCDEPLOYMENTSETSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCDeploymentSetsRequest : public RpcServiceRequest {
public:
	DescribeRCDeploymentSetsRequest();
	~DescribeRCDeploymentSetsRequest();
	std::string getDeploymentSetIds() const;
	void setDeploymentSetIds(const std::string &deploymentSetIds);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTag() const;
	void setTag(const std::string &tag);
	std::string getDeploymentSetName() const;
	void setDeploymentSetName(const std::string &deploymentSetName);
	std::string getStrategy() const;
	void setStrategy(const std::string &strategy);

private:
	std::string deploymentSetIds_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string tag_;
	std::string deploymentSetName_;
	std::string strategy_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCDEPLOYMENTSETSREQUEST_H_
