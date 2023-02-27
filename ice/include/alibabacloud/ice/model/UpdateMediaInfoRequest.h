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

#ifndef ALIBABACLOUD_ICE_MODEL_UPDATEMEDIAINFOREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_UPDATEMEDIAINFOREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT UpdateMediaInfoRequest : public RpcServiceRequest {
public:
	UpdateMediaInfoRequest();
	~UpdateMediaInfoRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getBusinessType() const;
	void setBusinessType(const std::string &businessType);
	std::string getCoverURL() const;
	void setCoverURL(const std::string &coverURL);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	bool getAppendDynamicMeta() const;
	void setAppendDynamicMeta(bool appendDynamicMeta);
	long getCateId() const;
	void setCateId(long cateId);
	std::string getDynamicMetaDataList() const;
	void setDynamicMetaDataList(const std::string &dynamicMetaDataList);
	std::string getMediaTags() const;
	void setMediaTags(const std::string &mediaTags);
	std::string getDynamicMetaData() const;
	void setDynamicMetaData(const std::string &dynamicMetaData);
	std::string getInputURL() const;
	void setInputURL(const std::string &inputURL);
	std::string getMediaId() const;
	void setMediaId(const std::string &mediaId);
	std::string getReferenceId() const;
	void setReferenceId(const std::string &referenceId);
	std::string getSnapshots() const;
	void setSnapshots(const std::string &snapshots);
	bool getAppendTags() const;
	void setAppendTags(bool appendTags);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	bool getAppendSnapshots() const;
	void setAppendSnapshots(bool appendSnapshots);

private:
	std::string description_;
	std::string title_;
	std::string businessType_;
	std::string coverURL_;
	std::string userData_;
	bool appendDynamicMeta_;
	long cateId_;
	std::string dynamicMetaDataList_;
	std::string mediaTags_;
	std::string dynamicMetaData_;
	std::string inputURL_;
	std::string mediaId_;
	std::string referenceId_;
	std::string snapshots_;
	bool appendTags_;
	std::string category_;
	bool appendSnapshots_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_UPDATEMEDIAINFOREQUEST_H_
