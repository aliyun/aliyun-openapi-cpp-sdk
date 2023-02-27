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

#ifndef ALIBABACLOUD_ICE_MODEL_SEARCHEDITINGPROJECTREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SEARCHEDITINGPROJECTREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SearchEditingProjectRequest : public RpcServiceRequest {
public:
	SearchEditingProjectRequest();
	~SearchEditingProjectRequest();
	std::string getForceNewIndex() const;
	void setForceNewIndex(const std::string &forceNewIndex);
	std::string getUserAgent() const;
	void setUserAgent(const std::string &userAgent);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getTemplateType() const;
	void setTemplateType(const std::string &templateType);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getProjectType() const;
	void setProjectType(const std::string &projectType);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getPageNo() const;
	void setPageNo(long pageNo);
	std::string getCreateSource() const;
	void setCreateSource(const std::string &createSource);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string forceNewIndex_;
	std::string userAgent_;
	std::string startTime_;
	std::string nextToken_;
	std::string templateType_;
	long pageSize_;
	std::string projectType_;
	std::string endTime_;
	long pageNo_;
	std::string createSource_;
	long maxResults_;
	std::string sortBy_;
	std::string status_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SEARCHEDITINGPROJECTREQUEST_H_
