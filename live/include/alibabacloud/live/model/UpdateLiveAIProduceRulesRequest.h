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

#ifndef ALIBABACLOUD_LIVE_MODEL_UPDATELIVEAIPRODUCERULESREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_UPDATELIVEAIPRODUCERULESREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT UpdateLiveAIProduceRulesRequest : public RpcServiceRequest {
public:
	UpdateLiveAIProduceRulesRequest();
	~UpdateLiveAIProduceRulesRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSuffix() const;
	void setSuffix(const std::string &suffix);
	std::string getSubtitleName() const;
	void setSubtitleName(const std::string &subtitleName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getRulesId() const;
	void setRulesId(const std::string &rulesId);
	std::string getApp() const;
	void setApp(const std::string &app);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	bool getIsLazy() const;
	void setIsLazy(bool isLazy);
	std::string getStudioName() const;
	void setStudioName(const std::string &studioName);
	std::string getLiveTemplate() const;
	void setLiveTemplate(const std::string &liveTemplate);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	bool getIsOrigin() const;
	void setIsOrigin(bool isOrigin);
	std::string getSubtitleId() const;
	void setSubtitleId(const std::string &subtitleId);

private:
	std::string description_;
	std::string suffix_;
	std::string subtitleName_;
	std::string regionId_;
	std::string rulesId_;
	std::string app_;
	long ownerId_;
	bool isLazy_;
	std::string studioName_;
	std::string liveTemplate_;
	std::string domain_;
	bool isOrigin_;
	std::string subtitleId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_UPDATELIVEAIPRODUCERULESREQUEST_H_
