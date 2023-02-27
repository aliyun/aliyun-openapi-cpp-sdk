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

#ifndef ALIBABACLOUD_ICE_MODEL_SEARCHPUBLICMEDIAINFOREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SEARCHPUBLICMEDIAINFOREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SearchPublicMediaInfoRequest : public RpcServiceRequest {
public:
	SearchPublicMediaInfoRequest();
	~SearchPublicMediaInfoRequest();
	std::string getEntityId() const;
	void setEntityId(const std::string &entityId);
	bool getAuthorized() const;
	void setAuthorized(bool authorized);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getMediaIds() const;
	void setMediaIds(const std::string &mediaIds);
	std::string getDynamicMetaDataMatchFields() const;
	void setDynamicMetaDataMatchFields(const std::string &dynamicMetaDataMatchFields);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	bool getFavorite() const;
	void setFavorite(bool favorite);

private:
	std::string entityId_;
	bool authorized_;
	int pageSize_;
	std::string mediaIds_;
	std::string dynamicMetaDataMatchFields_;
	int pageNo_;
	std::string sortBy_;
	bool favorite_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SEARCHPUBLICMEDIAINFOREQUEST_H_
