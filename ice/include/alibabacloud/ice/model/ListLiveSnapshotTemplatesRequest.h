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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTLIVESNAPSHOTTEMPLATESREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_LISTLIVESNAPSHOTTEMPLATESREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT ListLiveSnapshotTemplatesRequest : public RpcServiceRequest {
public:
	ListLiveSnapshotTemplatesRequest();
	~ListLiveSnapshotTemplatesRequest();
	std::vector<std::string> getTemplateIds() const;
	void setTemplateIds(const std::vector<std::string> &templateIds);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getSearchKeyWord() const;
	void setSearchKeyWord(const std::string &searchKeyWord);
	int getPageNo() const;
	void setPageNo(int pageNo);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);

private:
	std::vector<std::string> templateIds_;
	std::string type_;
	std::string searchKeyWord_;
	int pageNo_;
	int pageSize_;
	std::string sortBy_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_LISTLIVESNAPSHOTTEMPLATESREQUEST_H_
