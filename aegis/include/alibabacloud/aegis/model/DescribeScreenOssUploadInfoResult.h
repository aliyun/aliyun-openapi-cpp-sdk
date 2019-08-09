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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENOSSUPLOADINFORESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENOSSUPLOADINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeScreenOssUploadInfoResult : public ServiceResult
			{
			public:


				DescribeScreenOssUploadInfoResult();
				explicit DescribeScreenOssUploadInfoResult(const std::string &payload);
				~DescribeScreenOssUploadInfoResult();
				std::string getPolicy()const;
				int getExpire()const;
				std::string getAccessId()const;
				std::string getSignature()const;
				std::string getHost()const;
				bool getSuccess()const;
				std::string getKey()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string policy_;
				int expire_;
				std::string accessId_;
				std::string signature_;
				std::string host_;
				bool success_;
				std::string key_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENOSSUPLOADINFORESULT_H_