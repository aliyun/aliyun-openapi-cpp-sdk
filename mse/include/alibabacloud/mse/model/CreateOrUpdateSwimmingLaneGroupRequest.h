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

#ifndef ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEGROUPREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEGROUPREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT CreateOrUpdateSwimmingLaneGroupRequest : public RpcServiceRequest {
public:
	CreateOrUpdateSwimmingLaneGroupRequest();
	~CreateOrUpdateSwimmingLaneGroupRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getAppIds() const;
	void setAppIds(const std::string &appIds);
	bool getDbGrayEnable() const;
	void setDbGrayEnable(bool dbGrayEnable);
	bool getEnable() const;
	void setEnable(bool enable);
	long getId() const;
	void setId(long id);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getMessageQueueFilterSide() const;
	void setMessageQueueFilterSide(const std::string &messageQueueFilterSide);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	int getStatus() const;
	void setStatus(int status);
	bool getMessageQueueGrayEnable() const;
	void setMessageQueueGrayEnable(bool messageQueueGrayEnable);
	std::string getEntryApp() const;
	void setEntryApp(const std::string &entryApp);
	bool getRecordCanaryDetail() const;
	void setRecordCanaryDetail(bool recordCanaryDetail);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	std::string mseSessionId_;
	std::string appIds_;
	bool dbGrayEnable_;
	bool enable_;
	long id_;
	std::string name_;
	std::string messageQueueFilterSide_;
	std::string region_;
	int status_;
	bool messageQueueGrayEnable_;
	std::string entryApp_;
	bool recordCanaryDetail_;
	std::string _namespace_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEGROUPREQUEST_H_
