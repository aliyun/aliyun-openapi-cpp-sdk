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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTLIVERECORDFILESREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTLIVERECORDFILESREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListLiveRecordFilesRequest : public RpcServiceRequest {
public:
	ListLiveRecordFilesRequest();
	~ListLiveRecordFilesRequest();
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getRecordFormat() const;
	void setRecordFormat(const std::string &recordFormat);
	std::vector<std::string> getJobIds() const;
	void setJobIds(const std::vector<std::string> &jobIds);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);

private:
	std::string endTime_;
	std::string startTime_;
	int pageNo_;
	std::string recordFormat_;
	std::vector<std::string> jobIds_;
	int pageSize_;
	std::string sortBy_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTLIVERECORDFILESREQUEST_H_
