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

#ifndef ALIBABACLOUD_MSEAP_MODEL_GETPROXYBYTYPERESULT_H_
#define ALIBABACLOUD_MSEAP_MODEL_GETPROXYBYTYPERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mseap/MseapExport.h>

namespace AlibabaCloud
{
	namespace Mseap
	{
		namespace Model
		{
			class ALIBABACLOUD_MSEAP_EXPORT GetProxyByTypeResult : public ServiceResult
			{
			public:


				GetProxyByTypeResult();
				explicit GetProxyByTypeResult(const std::string &payload);
				~GetProxyByTypeResult();
				bool getAllowRetry()const;
				std::string getErrorMsg()const;
				int getHttpStatusCode()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getModule()const;
				bool getSuccess()const;
				std::string getAppName()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool allowRetry_;
				std::string errorMsg_;
				int httpStatusCode_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string dynamicMessage_;
				std::string module_;
				bool success_;
				std::string appName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSEAP_MODEL_GETPROXYBYTYPERESULT_H_