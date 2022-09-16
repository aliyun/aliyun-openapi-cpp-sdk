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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEFOTATASKSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEFOTATASKSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeFotaTasksRequest : public RpcServiceRequest {
public:
	DescribeFotaTasksRequest();
	~DescribeFotaTasksRequest();
	std::string getUserStatus() const;
	void setUserStatus(const std::string &userStatus);
	std::string getFotaStatus() const;
	void setFotaStatus(const std::string &fotaStatus);
	std::vector<std::string> getTaskUid() const;
	void setTaskUid(const std::vector<std::string> &taskUid);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string userStatus_;
	std::string fotaStatus_;
	std::vector<std::string> taskUid_;
	std::string regionId_;
	std::string nextToken_;
	int maxResults_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEFOTATASKSREQUEST_H_
