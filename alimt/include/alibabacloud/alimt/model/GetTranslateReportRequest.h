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

#ifndef ALIBABACLOUD_ALIMT_MODEL_GETTRANSLATEREPORTREQUEST_H_
#define ALIBABACLOUD_ALIMT_MODEL_GETTRANSLATEREPORTREQUEST_H_

#include <alibabacloud/alimt/AlimtExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alimt {
namespace Model {
class ALIBABACLOUD_ALIMT_EXPORT GetTranslateReportRequest : public RpcServiceRequest {
public:
	GetTranslateReportRequest();
	~GetTranslateReportRequest();
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getBeginTime() const;
	void setBeginTime(const std::string &beginTime);
	std::string getApiName() const;
	void setApiName(const std::string &apiName);
	std::string getGroup() const;
	void setGroup(const std::string &group);

private:
	std::string endTime_;
	std::string beginTime_;
	std::string apiName_;
	std::string group_;
};
} // namespace Model
} // namespace Alimt
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALIMT_MODEL_GETTRANSLATEREPORTREQUEST_H_
