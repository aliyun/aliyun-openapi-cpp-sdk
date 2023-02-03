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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATEMESSAGEQUEUEROUTEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATEMESSAGEQUEUEROUTEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateMessageQueueRouteRequest : public RpcServiceRequest {
public:
	UpdateMessageQueueRouteRequest();
	~UpdateMessageQueueRouteRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	bool getEnable() const;
	void setEnable(bool enable);
	std::vector<std::string> getTags() const;
	void setTags(const std::vector<std::string> &tags);
	std::string getFilterSide() const;
	void setFilterSide(const std::string &filterSide);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string mseSessionId_;
	std::string appName_;
	bool enable_;
	std::vector<std::string> tags_;
	std::string filterSide_;
	std::string appId_;
	std::string _namespace_;
	std::string acceptLanguage_;
	std::string region_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATEMESSAGEQUEUEROUTEREQUEST_H_
