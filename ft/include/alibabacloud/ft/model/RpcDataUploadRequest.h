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

#ifndef ALIBABACLOUD_FT_MODEL_RPCDATAUPLOADREQUEST_H_
#define ALIBABACLOUD_FT_MODEL_RPCDATAUPLOADREQUEST_H_

#include <alibabacloud/ft/FtExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ft {
namespace Model {
class ALIBABACLOUD_FT_EXPORT RpcDataUploadRequest : public RpcServiceRequest {
public:
	RpcDataUploadRequest();
	~RpcDataUploadRequest();
	std::string getQuery1() const;
	void setQuery1(const std::string &query1);
	long getQuery2() const;
	void setQuery2(long query2);
	std::string getLargeParam() const;
	void setLargeParam(const std::string &largeParam);

private:
	std::string query1_;
	long query2_;
	std::string largeParam_;
};
} // namespace Model
} // namespace Ft
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FT_MODEL_RPCDATAUPLOADREQUEST_H_
