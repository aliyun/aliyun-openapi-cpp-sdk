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

#ifndef ALIBABACLOUD_ICE_MODEL_UPDATECATEGORYREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_UPDATECATEGORYREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT UpdateCategoryRequest : public RpcServiceRequest {
public:
	UpdateCategoryRequest();
	~UpdateCategoryRequest();
	std::string getBiz() const;
	void setBiz(const std::string &biz);
	long getCateId() const;
	void setCateId(long cateId);
	std::string getCateName() const;
	void setCateName(const std::string &cateName);

private:
	std::string biz_;
	long cateId_;
	std::string cateName_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_UPDATECATEGORYREQUEST_H_
