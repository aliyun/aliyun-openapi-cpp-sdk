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

#ifndef ALIBABACLOUD_CAMS_MODEL_SENDCHATAPPMASSMESSAGEREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_SENDCHATAPPMASSMESSAGEREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT SendChatappMassMessageRequest : public RpcServiceRequest {
public:
	struct SenderList {
		std::string to;
		std::map<std::string, std::string> templateParams;
		std::string string;
		std::vector<std::string> payload;
		struct ProductAction {
			std::string thumbnailProductRetailerId;
			struct SectionsItem {
				std::string title;
				struct ProductItemsItem {
					std::string productRetailerId;
				};
				ProductItemsItem productItemsItem;
				std::vector<ProductItemsItem> productItems;
			};
			SectionsItem sectionsItem;
			std::vector<SectionsItem> sections;
		};
		ProductAction productAction;
		struct FlowAction {
			std::string flowToken;
			std::map<std::string, std::string> flowActionData;
		};
		FlowAction flowAction;
	};
	SendChatappMassMessageRequest();
	~SendChatappMassMessageRequest();
	std::string getLanguage() const;
	void setLanguage(const std::string &language);
	std::string getCustWabaId() const;
	void setCustWabaId(const std::string &custWabaId);
	std::string getFallBackContent() const;
	void setFallBackContent(const std::string &fallBackContent);
	std::vector<SenderList> getSenderList() const;
	void setSenderList(const std::vector<SenderList> &senderList);
	std::string getApiCode() const;
	void setApiCode(const std::string &apiCode);
	std::string getChannelType() const;
	void setChannelType(const std::string &channelType);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	std::string getTag() const;
	void setTag(const std::string &tag);
	std::string getFallBackRule() const;
	void setFallBackRule(const std::string &fallBackRule);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getIsvCode() const;
	void setIsvCode(const std::string &isvCode);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	std::string getLabel() const;
	void setLabel(const std::string &label);
	std::string getFallBackId() const;
	void setFallBackId(const std::string &fallBackId);
	long getTtl() const;
	void setTtl(long ttl);
	int getFallBackDuration() const;
	void setFallBackDuration(int fallBackDuration);
	std::string getCustSpaceId() const;
	void setCustSpaceId(const std::string &custSpaceId);
	std::string getTemplateCode() const;
	void setTemplateCode(const std::string &templateCode);

private:
	std::string language_;
	std::string custWabaId_;
	std::string fallBackContent_;
	std::vector<SenderList> senderList_;
	std::string apiCode_;
	std::string channelType_;
	std::string from_;
	std::string templateName_;
	std::string tag_;
	std::string fallBackRule_;
	std::string taskId_;
	std::string isvCode_;
	std::string prodCode_;
	std::string label_;
	std::string fallBackId_;
	long ttl_;
	int fallBackDuration_;
	std::string custSpaceId_;
	std::string templateCode_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_SENDCHATAPPMASSMESSAGEREQUEST_H_
