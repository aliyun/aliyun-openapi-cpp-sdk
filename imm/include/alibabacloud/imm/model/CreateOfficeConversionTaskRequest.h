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

#ifndef ALIBABACLOUD_IMM_MODEL_CREATEOFFICECONVERSIONTASKREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CREATEOFFICECONVERSIONTASKREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT CreateOfficeConversionTaskRequest : public RpcServiceRequest {
public:
	struct Notification {
		struct MNS {
			std::string endpoint;
			std::string topicName;
		};
		MNS mNS;
		struct RocketMQ {
			std::string endpoint;
			std::string instanceId;
			std::string topicName;
		};
		RocketMQ rocketMQ;
	};
	struct TrimPolicy {
		bool disableDeleteUnusedPicture;
		bool disableDeleteRepeatedStyle;
		bool disableDeleteUnusedShape;
		bool disableDeleteEmptyCell;
	};
	struct CredentialConfig {
		struct ChainItem {
			std::string role;
			std::string roleType;
			std::string assumeRoleFor;
		};
		ChainItem chainItem;
		std::vector<ChainItem> chain;
		std::string serviceRole;
		std::string policy;
	};
	CreateOfficeConversionTaskRequest();
	~CreateOfficeConversionTaskRequest();
	long getSheetCount() const;
	void setSheetCount(long sheetCount);
	bool getShowComments() const;
	void setShowComments(bool showComments);
	Notification getNotification() const;
	void setNotification(const Notification &notification);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getPages() const;
	void setPages(const std::string &pages);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	bool getFitToHeight() const;
	void setFitToHeight(bool fitToHeight);
	long getEndPage() const;
	void setEndPage(long endPage);
	bool getFitToWidth() const;
	void setFitToWidth(bool fitToWidth);
	long getQuality() const;
	void setQuality(long quality);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);
	std::string getSourceURI() const;
	void setSourceURI(const std::string &sourceURI);
	long getSheetIndex() const;
	void setSheetIndex(long sheetIndex);
	bool getHoldLineFeed() const;
	void setHoldLineFeed(bool holdLineFeed);
	bool getLongText() const;
	void setLongText(bool longText);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	TrimPolicy getTrimPolicy() const;
	void setTrimPolicy(const TrimPolicy &trimPolicy);
	long getMaxSheetColumn() const;
	void setMaxSheetColumn(long maxSheetColumn);
	bool getFirstPage() const;
	void setFirstPage(bool firstPage);
	bool getPaperHorizontal() const;
	void setPaperHorizontal(bool paperHorizontal);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	long getScalePercentage() const;
	void setScalePercentage(long scalePercentage);
	long getStartPage() const;
	void setStartPage(long startPage);
	std::string getTargetURIPrefix() const;
	void setTargetURIPrefix(const std::string &targetURIPrefix);
	std::string getTargetURI() const;
	void setTargetURI(const std::string &targetURI);
	std::string getPaperSize() const;
	void setPaperSize(const std::string &paperSize);
	long getImageDPI() const;
	void setImageDPI(long imageDPI);
	bool getLongPicture() const;
	void setLongPicture(bool longPicture);
	long getMaxSheetRow() const;
	void setMaxSheetRow(long maxSheetRow);
	CredentialConfig getCredentialConfig() const;
	void setCredentialConfig(const CredentialConfig &credentialConfig);

private:
	long sheetCount_;
	bool showComments_;
	Notification notification_;
	std::string password_;
	std::string pages_;
	std::string notifyEndpoint_;
	std::string sourceType_;
	std::string projectName_;
	std::string notifyTopicName_;
	bool fitToHeight_;
	long endPage_;
	bool fitToWidth_;
	long quality_;
	std::map<std::string, std::string> tags_;
	std::string sourceURI_;
	long sheetIndex_;
	bool holdLineFeed_;
	bool longText_;
	std::string targetType_;
	TrimPolicy trimPolicy_;
	long maxSheetColumn_;
	bool firstPage_;
	bool paperHorizontal_;
	std::string userData_;
	long scalePercentage_;
	long startPage_;
	std::string targetURIPrefix_;
	std::string targetURI_;
	std::string paperSize_;
	long imageDPI_;
	bool longPicture_;
	long maxSheetRow_;
	CredentialConfig credentialConfig_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CREATEOFFICECONVERSIONTASKREQUEST_H_
