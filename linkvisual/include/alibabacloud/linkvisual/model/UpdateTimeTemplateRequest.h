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

#ifndef ALIBABACLOUD_LINKVISUAL_MODEL_UPDATETIMETEMPLATEREQUEST_H_
#define ALIBABACLOUD_LINKVISUAL_MODEL_UPDATETIMETEMPLATEREQUEST_H_

#include <alibabacloud/linkvisual/LinkvisualExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Linkvisual {
namespace Model {
class ALIBABACLOUD_LINKVISUAL_EXPORT UpdateTimeTemplateRequest : public RpcServiceRequest {
public:
	struct TimeSections {
		int dayOfWeek;
		int begin;
		int end;
	};
	UpdateTimeTemplateRequest();
	~UpdateTimeTemplateRequest();
	std::vector<TimeSections> getTimeSections() const;
	void setTimeSections(const std::vector<TimeSections> &timeSections);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	int getAllDay() const;
	void setAllDay(int allDay);
	std::string getApiProduct() const;
	void setApiProduct(const std::string &apiProduct);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getApiRevision() const;
	void setApiRevision(const std::string &apiRevision);

private:
	std::vector<TimeSections> timeSections_;
	std::string templateId_;
	int allDay_;
	std::string apiProduct_;
	std::string name_;
	std::string apiRevision_;
};
} // namespace Model
} // namespace Linkvisual
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LINKVISUAL_MODEL_UPDATETIMETEMPLATEREQUEST_H_
