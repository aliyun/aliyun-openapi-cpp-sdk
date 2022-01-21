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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATEDYNAMICTAGGROUPREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATEDYNAMICTAGGROUPREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT CreateDynamicTagGroupRequest : public RpcServiceRequest {
public:
	struct MatchExpress {
		std::string tagValue;
		std::string tagValueMatchFunction;
	};
	CreateDynamicTagGroupRequest();
	~CreateDynamicTagGroupRequest();
	bool getEnableSubscribeEvent() const;
	void setEnableSubscribeEvent(bool enableSubscribeEvent);
	std::string getMatchExpressFilterRelation() const;
	void setMatchExpressFilterRelation(const std::string &matchExpressFilterRelation);
	bool getEnableInstallAgent() const;
	void setEnableInstallAgent(bool enableInstallAgent);
	std::vector<MatchExpress> getMatchExpress() const;
	void setMatchExpress(const std::vector<MatchExpress> &matchExpress);
	std::vector<std::string> getContactGroupList() const;
	void setContactGroupList(const std::vector<std::string> &contactGroupList);
	std::vector<std::string> getTemplateIdList() const;
	void setTemplateIdList(const std::vector<std::string> &templateIdList);
	std::string getTagKey() const;
	void setTagKey(const std::string &tagKey);
	std::string getTagRegionId() const;
	void setTagRegionId(const std::string &tagRegionId);

private:
	bool enableSubscribeEvent_;
	std::string matchExpressFilterRelation_;
	bool enableInstallAgent_;
	std::vector<MatchExpress> matchExpress_;
	std::vector<std::string> contactGroupList_;
	std::vector<std::string> templateIdList_;
	std::string tagKey_;
	std::string tagRegionId_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_CREATEDYNAMICTAGGROUPREQUEST_H_
