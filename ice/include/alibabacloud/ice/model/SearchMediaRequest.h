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

#ifndef ALIBABACLOUD_ICE_MODEL_SEARCHMEDIAREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SEARCHMEDIAREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SearchMediaRequest : public RpcServiceRequest {
public:
	SearchMediaRequest();
	~SearchMediaRequest();
	std::string getEntityId() const;
	void setEntityId(const std::string &entityId);
	std::string getBiz() const;
	void setBiz(const std::string &biz);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getMatch() const;
	void setMatch(const std::string &match);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	std::string getFields() const;
	void setFields(const std::string &fields);

private:
	std::string entityId_;
	std::string biz_;
	int pageSize_;
	std::string match_;
	int pageNo_;
	std::string appId_;
	std::string sortBy_;
	std::string fields_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SEARCHMEDIAREQUEST_H_
