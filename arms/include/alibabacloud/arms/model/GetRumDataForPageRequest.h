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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETRUMDATAFORPAGEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_GETRUMDATAFORPAGEREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT GetRumDataForPageRequest : public RpcServiceRequest {
public:
	GetRumDataForPageRequest();
	~GetRumDataForPageRequest();
	std::string getQuery() const;
	void setQuery(const std::string &query);
	int getEndTime() const;
	void setEndTime(int endTime);
	std::string getPid() const;
	void setPid(const std::string &pid);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	int getStartTime() const;
	void setStartTime(int startTime);
	std::string getAppGroup() const;
	void setAppGroup(const std::string &appGroup);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string query_;
	int endTime_;
	std::string pid_;
	int currentPage_;
	int startTime_;
	std::string appGroup_;
	std::string regionId_;
	int pageSize_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_GETRUMDATAFORPAGEREQUEST_H_
