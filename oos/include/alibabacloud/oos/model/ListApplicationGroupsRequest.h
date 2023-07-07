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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTAPPLICATIONGROUPSREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_LISTAPPLICATIONGROUPSREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT ListApplicationGroupsRequest : public RpcServiceRequest {
public:
	ListApplicationGroupsRequest();
	~ListApplicationGroupsRequest();
	std::string getResourceProduct() const;
	void setResourceProduct(const std::string &resourceProduct);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getDeployRegionId() const;
	void setDeployRegionId(const std::string &deployRegionId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getApplicationName() const;
	void setApplicationName(const std::string &applicationName);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string resourceProduct_;
	std::string regionId_;
	std::string nextToken_;
	std::string resourceId_;
	std::string deployRegionId_;
	std::string resourceType_;
	std::string applicationName_;
	int maxResults_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_LISTAPPLICATIONGROUPSREQUEST_H_
