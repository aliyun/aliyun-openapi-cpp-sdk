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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_LISTMULTIACCOUNTRESOURCERELATIONSHIPSREQUEST_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_LISTMULTIACCOUNTRESOURCERELATIONSHIPSREQUEST_H_

#include <alibabacloud/resourcecenter/ResourceCenterExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceCenter {
namespace Model {
class ALIBABACLOUD_RESOURCECENTER_EXPORT ListMultiAccountResourceRelationshipsRequest : public RpcServiceRequest {
public:
	struct RelatedResourceFilter {
		std::string matchType;
		std::string key;
	};
	ListMultiAccountResourceRelationshipsRequest();
	~ListMultiAccountResourceRelationshipsRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getScope() const;
	void setScope(const std::string &scope);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::vector<RelatedResourceFilter> getRelatedResourceFilter() const;
	void setRelatedResourceFilter(const std::vector<RelatedResourceFilter> &relatedResourceFilter);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string regionId_;
	std::string nextToken_;
	std::string scope_;
	std::string resourceId_;
	std::string resourceType_;
	std::vector<RelatedResourceFilter> relatedResourceFilter_;
	int maxResults_;
};
} // namespace Model
} // namespace ResourceCenter
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_LISTMULTIACCOUNTRESOURCERELATIONSHIPSREQUEST_H_
