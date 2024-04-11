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

#ifndef ALIBABACLOUD_CAMS_MODEL_SENDCHATAPPMESSAGEREQUEST_H_
#define ALIBABACLOUD_CAMS_MODEL_SENDCHATAPPMESSAGEREQUEST_H_

#include <alibabacloud/cams/CamsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cams {
namespace Model {
class ALIBABACLOUD_CAMS_EXPORT SendChatappMessageRequest : public RpcServiceRequest {
public:
	struct FlowAction {
		std::string flowToken;
		std::map<std::string, std::string> flowActionData;
	};
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
	SendChatappMessageRequest();
	~SendChatappMessageRequest();
	std::string getLanguage() const;
	void setLanguage(const std::string &language);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getFallBackContent() const;
	void setFallBackContent(const std::string &fallBackContent);
	std::vector<std::string> getPayload() const;
	void setPayload(const std::vector<std::string> &payload);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getTag() const;
	void setTag(const std::string &tag);
	std::string getFallBackRule() const;
	void setFallBackRule(const std::string &fallBackRule);
	FlowAction getFlowAction() const;
	void setFlowAction(const FlowAction &flowAction);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getIsvCode() const;
	void setIsvCode(const std::string &isvCode);
	std::string getCustSpaceId() const;
	void setCustSpaceId(const std::string &custSpaceId);
	std::string getTemplateCode() const;
	void setTemplateCode(const std::string &templateCode);
	ProductAction getProductAction() const;
	void setProductAction(const ProductAction &productAction);
	std::string getMessageType() const;
	void setMessageType(const std::string &messageType);
	std::string getCustWabaId() const;
	void setCustWabaId(const std::string &custWabaId);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::map<std::string, std::string> getTemplateParams() const;
	void setTemplateParams(const std::map<std::string, std::string> &templateParams);
	std::string getApiCode() const;
	void setApiCode(const std::string &apiCode);
	std::string getChannelType() const;
	void setChannelType(const std::string &channelType);
	std::string getTemplateName() const;
	void setTemplateName(const std::string &templateName);
	std::string getTrackingData() const;
	void setTrackingData(const std::string &trackingData);
	std::string getContextMessageId() const;
	void setContextMessageId(const std::string &contextMessageId);
	std::string getProdCode() const;
	void setProdCode(const std::string &prodCode);
	std::string getLabel() const;
	void setLabel(const std::string &label);
	std::string getFallBackId() const;
	void setFallBackId(const std::string &fallBackId);
	int getTtl() const;
	void setTtl(int ttl);
	int getFallBackDuration() const;
	void setFallBackDuration(int fallBackDuration);
	std::string getTo() const;
	void setTo(const std::string &to);

private:
	std::string language_;
	std::string type_;
	std::string fallBackContent_;
	std::vector<std::string> payload_;
	std::string from_;
	std::string tag_;
	std::string fallBackRule_;
	FlowAction flowAction_;
	std::string taskId_;
	std::string isvCode_;
	std::string custSpaceId_;
	std::string templateCode_;
	ProductAction productAction_;
	std::string messageType_;
	std::string custWabaId_;
	std::string content_;
	std::map<std::string, std::string> templateParams_;
	std::string apiCode_;
	std::string channelType_;
	std::string templateName_;
	std::string trackingData_;
	std::string contextMessageId_;
	std::string prodCode_;
	std::string label_;
	std::string fallBackId_;
	int ttl_;
	int fallBackDuration_;
	std::string to_;
};
} // namespace Model
} // namespace Cams
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAMS_MODEL_SENDCHATAPPMESSAGEREQUEST_H_
