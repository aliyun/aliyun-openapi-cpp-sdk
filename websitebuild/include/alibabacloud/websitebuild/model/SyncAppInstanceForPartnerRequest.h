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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_SYNCAPPINSTANCEFORPARTNERREQUEST_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_SYNCAPPINSTANCEFORPARTNERREQUEST_H_

#include <alibabacloud/websitebuild/WebsiteBuildExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace WebsiteBuild {
namespace Model {
class ALIBABACLOUD_WEBSITEBUILD_EXPORT SyncAppInstanceForPartnerRequest : public RpcServiceRequest {
public:
	struct AppInstance {
		std::string appType;
		struct Profile {
			std::string deployArea;
			std::string templateEtag;
			std::string orderId;
			std::string lxInstanceId;
			std::string siteVersion;
			std::string templateId;
		};
		Profile profile;
		std::string siteHost;
		std::string endTime;
		std::string startTime;
		std::string userId;
		std::string gmtPublish;
		std::string deleted;
		std::string domain;
		std::string bizId;
		std::string name;
		std::string iconUrl;
		std::string gmtDelete;
		std::string slug;
		std::string thumbnailUrl;
		std::string status;
	};
	SyncAppInstanceForPartnerRequest();
	~SyncAppInstanceForPartnerRequest();
	AppInstance getAppInstance() const;
	void setAppInstance(const AppInstance &appInstance);
	std::string getSourceBizId() const;
	void setSourceBizId(const std::string &sourceBizId);
	std::string get_Operator() const;
	void set_Operator(const std::string &_operator);
	std::string getEventType() const;
	void setEventType(const std::string &eventType);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);

private:
	AppInstance appInstance_;
	std::string sourceBizId_;
	std::string _operator_;
	std::string eventType_;
	std::string sourceType_;
};
} // namespace Model
} // namespace WebsiteBuild
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_SYNCAPPINSTANCEFORPARTNERREQUEST_H_
