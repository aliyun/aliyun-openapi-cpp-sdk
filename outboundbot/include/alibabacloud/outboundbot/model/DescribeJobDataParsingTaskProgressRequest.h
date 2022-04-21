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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEJOBDATAPARSINGTASKPROGRESSREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEJOBDATAPARSINGTASKPROGRESSREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT DescribeJobDataParsingTaskProgressRequest : public RpcServiceRequest {
public:
	DescribeJobDataParsingTaskProgressRequest();
	~DescribeJobDataParsingTaskProgressRequest();
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getJobDataParsingTaskId() const;
	void setJobDataParsingTaskId(const std::string &jobDataParsingTaskId);

private:
	std::string instanceId_;
	std::string jobDataParsingTaskId_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBEJOBDATAPARSINGTASKPROGRESSREQUEST_H_
