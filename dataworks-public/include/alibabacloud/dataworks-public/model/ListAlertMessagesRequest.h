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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTALERTMESSAGESREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTALERTMESSAGESREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListAlertMessagesRequest : public RpcServiceRequest {
public:
	ListAlertMessagesRequest();
	~ListAlertMessagesRequest();
	std::string getAlertUser() const;
	void setAlertUser(const std::string &alertUser);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getBeginTime() const;
	void setBeginTime(const std::string &beginTime);
	std::string getAlertMethods() const;
	void setAlertMethods(const std::string &alertMethods);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	long getBaselineId() const;
	void setBaselineId(long baselineId);
	long getRemindId() const;
	void setRemindId(long remindId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getAlertRuleTypes() const;
	void setAlertRuleTypes(const std::string &alertRuleTypes);

private:
	std::string alertUser_;
	std::string endTime_;
	std::string beginTime_;
	std::string alertMethods_;
	int pageNumber_;
	long baselineId_;
	long remindId_;
	int pageSize_;
	std::string alertRuleTypes_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTALERTMESSAGESREQUEST_H_
