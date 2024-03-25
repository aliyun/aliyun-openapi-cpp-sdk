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

#ifndef ALIBABACLOUD_FNF_MODEL_REPORTTASKFAILEDREQUEST_H_
#define ALIBABACLOUD_FNF_MODEL_REPORTTASKFAILEDREQUEST_H_

#include <alibabacloud/fnf/FnfExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Fnf {
namespace Model {
class ALIBABACLOUD_FNF_EXPORT ReportTaskFailedRequest : public RpcServiceRequest {
public:
	ReportTaskFailedRequest();
	~ReportTaskFailedRequest();
	std::string getCause() const;
	void setCause(const std::string &cause);
	std::string getError() const;
	void setError(const std::string &error);
	std::string getTaskToken() const;
	void setTaskToken(const std::string &taskToken);

private:
	std::string cause_;
	std::string error_;
	std::string taskToken_;
};
} // namespace Model
} // namespace Fnf
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FNF_MODEL_REPORTTASKFAILEDREQUEST_H_
