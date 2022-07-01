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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBETAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBETAGRESOURCESREQUEST_H_

#include <alibabacloud/ddoscoo/DdoscooExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddoscoo {
namespace Model {
class ALIBABACLOUD_DDOSCOO_EXPORT DescribeTagResourcesRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	DescribeTagResourcesRequest();
	~DescribeTagResourcesRequest();
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::vector<std::string> getResourceIds() const;
	void setResourceIds(const std::vector<std::string> &resourceIds);

private:
	std::string resourceGroupId_;
	std::string sourceIp_;
	std::string regionId_;
	std::string nextToken_;
	std::string resourceType_;
	std::vector<Tags> tags_;
	std::vector<std::string> resourceIds_;
};
} // namespace Model
} // namespace Ddoscoo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBETAGRESOURCESREQUEST_H_
