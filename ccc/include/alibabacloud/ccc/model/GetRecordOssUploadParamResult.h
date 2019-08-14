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

#ifndef ALIBABACLOUD_CCC_MODEL_GETRECORDOSSUPLOADPARAMRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETRECORDOSSUPLOADPARAMRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT GetRecordOssUploadParamResult : public ServiceResult
			{
			public:


				GetRecordOssUploadParamResult();
				explicit GetRecordOssUploadParamResult(const std::string &payload);
				~GetRecordOssUploadParamResult();
				std::string getPolicy()const;
				std::string getMessage()const;
				std::string getSignature()const;
				int getHttpStatusCode()const;
				std::string getOssFileName()const;
				std::string getHost()const;
				std::string getExpires()const;
				std::string getDir()const;
				std::string getCode()const;
				std::string getOssAccessKeyId()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string policy_;
				std::string message_;
				std::string signature_;
				int httpStatusCode_;
				std::string ossFileName_;
				std::string host_;
				std::string expires_;
				std::string dir_;
				std::string code_;
				std::string ossAccessKeyId_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_GETRECORDOSSUPLOADPARAMRESULT_H_