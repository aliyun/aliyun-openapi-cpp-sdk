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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTLIVETRANSCODEJOBSREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTLIVETRANSCODEJOBSREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListLiveTranscodeJobsRequest : public RpcServiceRequest {
public:
	ListLiveTranscodeJobsRequest();
	~ListLiveTranscodeJobsRequest();
	std::string getType() const;
	void setType(const std::string &type);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getKeyWord() const;
	void setKeyWord(const std::string &keyWord);
	int getStartMode() const;
	void setStartMode(int startMode);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string type_;
	int pageSize_;
	std::string keyWord_;
	int startMode_;
	int pageNo_;
	std::string sortBy_;
	int status_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTLIVETRANSCODEJOBSREQUEST_H_
