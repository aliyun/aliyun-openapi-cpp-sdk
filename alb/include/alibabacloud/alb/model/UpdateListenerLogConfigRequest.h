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

#ifndef ALIBABACLOUD_ALB_MODEL_UPDATELISTENERLOGCONFIGREQUEST_H_
#define ALIBABACLOUD_ALB_MODEL_UPDATELISTENERLOGCONFIGREQUEST_H_

#include <alibabacloud/alb/AlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Alb {
namespace Model {
class ALIBABACLOUD_ALB_EXPORT UpdateListenerLogConfigRequest : public RpcServiceRequest {
public:
	struct AccessLogTracingConfig {
		std::string tracingType;
		bool tracingEnabled;
		int tracingSample;
	};
	UpdateListenerLogConfigRequest();
	~UpdateListenerLogConfigRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	bool getAccessLogRecordCustomizedHeadersEnabled() const;
	void setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	AccessLogTracingConfig getAccessLogTracingConfig() const;
	void setAccessLogTracingConfig(const AccessLogTracingConfig &accessLogTracingConfig);

private:
	std::string clientToken_;
	std::string listenerId_;
	bool accessLogRecordCustomizedHeadersEnabled_;
	bool dryRun_;
	AccessLogTracingConfig accessLogTracingConfig_;
};
} // namespace Model
} // namespace Alb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ALB_MODEL_UPDATELISTENERLOGCONFIGREQUEST_H_
