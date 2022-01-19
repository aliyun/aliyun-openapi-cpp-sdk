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

#ifndef ALIBABACLOUD_MSE_MODEL_GETENGINENAMEPACERESULT_H_
#define ALIBABACLOUD_MSE_MODEL_GETENGINENAMEPACERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT GetEngineNamepaceResult : public ServiceResult
			{
			public:


				GetEngineNamepaceResult();
				explicit GetEngineNamepaceResult(const std::string &payload);
				~GetEngineNamepaceResult();
				std::string getHttpCode()const;
				std::string getType()const;
				std::string getQuota()const;
				std::string getMessage()const;
				std::string getConfigCount()const;
				std::string getNamespaceShowName()const;
				std::string get_Namespace()const;
				std::string getErrorCode()const;
				bool getSuccess()const;
				std::string getNamespaceDesc()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string httpCode_;
				std::string type_;
				std::string quota_;
				std::string message_;
				std::string configCount_;
				std::string namespaceShowName_;
				std::string _namespace_;
				std::string errorCode_;
				bool success_;
				std::string namespaceDesc_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_GETENGINENAMEPACERESULT_H_