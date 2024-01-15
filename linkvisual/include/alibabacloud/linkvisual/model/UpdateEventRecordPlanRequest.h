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

#ifndef ALIBABACLOUD_LINKVISUAL_MODEL_UPDATEEVENTRECORDPLANREQUEST_H_
#define ALIBABACLOUD_LINKVISUAL_MODEL_UPDATEEVENTRECORDPLANREQUEST_H_

#include <alibabacloud/linkvisual/LinkvisualExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Linkvisual {
namespace Model {
class ALIBABACLOUD_LINKVISUAL_EXPORT UpdateEventRecordPlanRequest : public RpcServiceRequest {
public:
	UpdateEventRecordPlanRequest();
	~UpdateEventRecordPlanRequest();
	std::string getEventTypes() const;
	void setEventTypes(const std::string &eventTypes);
	int getPreRecordDuration() const;
	void setPreRecordDuration(int preRecordDuration);
	int getRecordDuration() const;
	void setRecordDuration(int recordDuration);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getApiProduct() const;
	void setApiProduct(const std::string &apiProduct);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getApiRevision() const;
	void setApiRevision(const std::string &apiRevision);
	std::string getPlanId() const;
	void setPlanId(const std::string &planId);

private:
	std::string eventTypes_;
	int preRecordDuration_;
	int recordDuration_;
	std::string templateId_;
	std::string apiProduct_;
	std::string name_;
	std::string apiRevision_;
	std::string planId_;
};
} // namespace Model
} // namespace Linkvisual
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LINKVISUAL_MODEL_UPDATEEVENTRECORDPLANREQUEST_H_
