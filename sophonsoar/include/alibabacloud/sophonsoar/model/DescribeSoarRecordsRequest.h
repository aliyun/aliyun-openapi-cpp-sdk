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

#ifndef ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOARRECORDSREQUEST_H_
#define ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOARRECORDSREQUEST_H_

#include <alibabacloud/sophonsoar/SophonsoarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sophonsoar {
namespace Model {
class ALIBABACLOUD_SOPHONSOAR_EXPORT DescribeSoarRecordsRequest : public RpcServiceRequest {
public:
	DescribeSoarRecordsRequest();
	~DescribeSoarRecordsRequest();
	std::string getTaskflowMd5() const;
	void setTaskflowMd5(const std::string &taskflowMd5);
	std::string getRoleFor() const;
	void setRoleFor(const std::string &roleFor);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	long getEndMillis() const;
	void setEndMillis(long endMillis);
	long getStartMillis() const;
	void setStartMillis(long startMillis);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getTaskStatus() const;
	void setTaskStatus(const std::string &taskStatus);
	std::string getPlaybookUuid() const;
	void setPlaybookUuid(const std::string &playbookUuid);
	std::string getRequestUuid() const;
	void setRequestUuid(const std::string &requestUuid);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getRoleType() const;
	void setRoleType(const std::string &roleType);
	std::string getTriggerUser() const;
	void setTriggerUser(const std::string &triggerUser);
	std::string getLang() const;
	void setLang(const std::string &lang);

private:
	std::string taskflowMd5_;
	std::string roleFor_;
	std::string taskType_;
	long endMillis_;
	long startMillis_;
	int pageNumber_;
	std::string taskStatus_;
	std::string playbookUuid_;
	std::string requestUuid_;
	int pageSize_;
	std::string roleType_;
	std::string triggerUser_;
	std::string lang_;
};
} // namespace Model
} // namespace Sophonsoar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOARRECORDSREQUEST_H_
