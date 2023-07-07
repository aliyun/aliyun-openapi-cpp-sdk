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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTAPPLICATIONSREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_LISTAPPLICATIONSREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT ListApplicationsRequest : public RpcServiceRequest {
public:
	ListApplicationsRequest();
	~ListApplicationsRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getNames() const;
	void setNames(const std::string &names);
	std::string getName() const;
	void setName(const std::string &name);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getApplicationType() const;
	void setApplicationType(const std::string &applicationType);

private:
	std::string regionId_;
	std::string nextToken_;
	std::string tags_;
	std::string names_;
	std::string name_;
	int maxResults_;
	std::string applicationType_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_LISTAPPLICATIONSREQUEST_H_
