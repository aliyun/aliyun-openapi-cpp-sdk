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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_GENERATEUPLOADFILEPOLICYRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_GENERATEUPLOADFILEPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT GenerateUploadFilePolicyResult : public ServiceResult
			{
			public:


				GenerateUploadFilePolicyResult();
				explicit GenerateUploadFilePolicyResult(const std::string &payload);
				~GenerateUploadFilePolicyResult();
				std::string getFileDir()const;
				std::string getEncodedPolicy()const;
				std::string getAccessId()const;
				std::string getSignature()const;
				std::string getHost()const;
				long getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string fileDir_;
				std::string encodedPolicy_;
				std::string accessId_;
				std::string signature_;
				std::string host_;
				long expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_GENERATEUPLOADFILEPOLICYRESULT_H_