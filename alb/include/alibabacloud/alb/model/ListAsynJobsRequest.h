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

#ifndef ALIBABACLOUD_ALB_MODEL_LISTASYNJOBSREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_LISTASYNJOBSREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT ListAsynJobsRequest : public RpcServiceRequest {
public:
	ListAsynJobsRequest();
	~ListAsynJobsRequest();
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getApiName() const;
	void setApiName(const std::string &apiName);
	std::vector<std::string> getJobIds() const;
	void setJobIds(const std::vector<std::string> &jobIds);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::vector<std::string> getResourceIds() const;
	void setResourceIds(const std::vector<std::string> &resourceIds);

private:
	std::string nextToken_;
	long endTime_;
	long beginTime_;
	std::string resourceType_;
	std::string apiName_;
	std::vector<std::string> jobIds_;
	long maxResults_;
	std::vector<std::string> resourceIds_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_LISTASYNJOBSREQUEST_H_
