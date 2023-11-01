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

#ifndef ALIBABACLOUD_AVATAR_MODEL_SUBMITAVATARVIDEOTASKREQUEST_H_
#define ALIBABACLOUD_AVATAR_MODEL_SUBMITAVATARVIDEOTASKREQUEST_H_

#include <alibabacloud/avatar/AvatarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Avatar {
namespace Model {
class ALIBABACLOUD_AVATAR_EXPORT SubmitAvatarVideoTaskRequest : public RpcServiceRequest {
public:
	struct App {
		std::string appId;
	};
	SubmitAvatarVideoTaskRequest();
	~SubmitAvatarVideoTaskRequest();
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getCallbackParams() const;
	void setCallbackParams(const std::string &callbackParams);
	long getTenantId() const;
	void setTenantId(long tenantId);
	std::string getVideoParams() const;
	void setVideoParams(const std::string &videoParams);
	App getApp() const;
	void setApp(const App &app);
	std::string getExtParams() const;
	void setExtParams(const std::string &extParams);
	std::string getVideoParams_CLS() const;
	void setVideoParams_CLS(const std::string &videoParams_CLS);
	bool getCallback() const;
	void setCallback(bool callback);
	std::string getExtParams_CLS() const;
	void setExtParams_CLS(const std::string &extParams_CLS);
	std::string getCallbackParams_CLS() const;
	void setCallbackParams_CLS(const std::string &callbackParams_CLS);

private:
	std::string title_;
	std::string callbackParams_;
	long tenantId_;
	std::string videoParams_;
	App app_;
	std::string extParams_;
	std::string videoParams_CLS_;
	bool callback_;
	std::string extParams_CLS_;
	std::string callbackParams_CLS_;
};
} // namespace Model
} // namespace Avatar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AVATAR_MODEL_SUBMITAVATARVIDEOTASKREQUEST_H_
