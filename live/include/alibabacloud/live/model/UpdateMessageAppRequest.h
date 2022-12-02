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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATEMESSAGEAPPREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATEMESSAGEAPPREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT UpdateMessageAppRequest : public RpcServiceRequest {
public:
	UpdateMessageAppRequest();
	~UpdateMessageAppRequest();
	std::map<std::string, std::string> getExtension() const;
	void setExtension(const std::map<std::string, std::string> &extension);
	std::map<std::string, std::string> getAppConfig() const;
	void setAppConfig(const std::map<std::string, std::string> &appConfig);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getAppId() const;
	void setAppId(const std::string &appId);

private:
	std::map<std::string, std::string> extension_;
	std::map<std::string, std::string> appConfig_;
	std::string appName_;
	std::string appId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATEMESSAGEAPPREQUEST_H_
