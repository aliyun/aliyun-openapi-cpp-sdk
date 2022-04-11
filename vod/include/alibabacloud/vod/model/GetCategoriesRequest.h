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

#ifndef ALIBABACLOUD_VOD_MODEL_GETCATEGORIESREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETCATEGORIESREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT GetCategoriesRequest : public RpcServiceRequest {
public:
	GetCategoriesRequest();
	~GetCategoriesRequest();
	std::string getType() const;
	void setType(const std::string &type);
	long getCateId() const;
	void setCateId(long cateId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	long getPageNo() const;
	void setPageNo(long pageNo);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);

private:
	std::string type_;
	long cateId_;
	long pageSize_;
	long pageNo_;
	std::string sortBy_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_GETCATEGORIESREQUEST_H_
