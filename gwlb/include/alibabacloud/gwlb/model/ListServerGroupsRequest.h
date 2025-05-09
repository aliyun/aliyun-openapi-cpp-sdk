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

#ifndef ALIBABACLOUD_GWLB_MODEL_LISTSERVERGROUPSREQUEST_H_
#define ALIBABACLOUD_GWLB_MODEL_LISTSERVERGROUPSREQUEST_H_

#include <alibabacloud/gwlb/GwlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gwlb {
namespace Model {
class ALIBABACLOUD_GWLB_EXPORT ListServerGroupsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	ListServerGroupsRequest();
	~ListServerGroupsRequest();
	std::vector<std::string> getServerGroupNames() const;
	void setServerGroupNames(const std::vector<std::string> &serverGroupNames);
	int getSkip() const;
	void setSkip(int skip);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::vector<std::string> getServerGroupIds() const;
	void setServerGroupIds(const std::vector<std::string> &serverGroupIds);
	std::string getServerGroupType() const;
	void setServerGroupType(const std::string &serverGroupType);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::vector<std::string> serverGroupNames_;
	int skip_;
	std::string resourceGroupId_;
	std::string nextToken_;
	std::vector<Tag> tag_;
	std::vector<std::string> serverGroupIds_;
	std::string serverGroupType_;
	std::string vpcId_;
	int maxResults_;
};
} // namespace Model
} // namespace Gwlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GWLB_MODEL_LISTSERVERGROUPSREQUEST_H_
