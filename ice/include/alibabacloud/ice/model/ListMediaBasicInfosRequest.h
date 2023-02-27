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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTMEDIABASICINFOSREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTMEDIABASICINFOSREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListMediaBasicInfosRequest : public RpcServiceRequest {
public:
	ListMediaBasicInfosRequest();
	~ListMediaBasicInfosRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getBusinessType() const;
	void setBusinessType(const std::string &businessType);
	std::string getBiz() const;
	void setBiz(const std::string &biz);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	bool getIncludeDynamicMetaData() const;
	void setIncludeDynamicMetaData(bool includeDynamicMetaData);
	std::string getUploadSource() const;
	void setUploadSource(const std::string &uploadSource);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	bool getIncludeFileBasicInfo() const;
	void setIncludeFileBasicInfo(bool includeFileBasicInfo);
	std::string getMediaId() const;
	void setMediaId(const std::string &mediaId);
	int getPageNo() const;
	void setPageNo(int pageNo);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getMediaType() const;
	void setMediaType(const std::string &mediaType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string startTime_;
	std::string source_;
	std::string businessType_;
	std::string biz_;
	std::string nextToken_;
	int pageSize_;
	std::string keyword_;
	bool includeDynamicMetaData_;
	std::string uploadSource_;
	std::string endTime_;
	bool includeFileBasicInfo_;
	std::string mediaId_;
	int pageNo_;
	int maxResults_;
	std::string sortBy_;
	std::string category_;
	std::string mediaType_;
	std::string status_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTMEDIABASICINFOSREQUEST_H_
