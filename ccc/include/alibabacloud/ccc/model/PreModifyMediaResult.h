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

#ifndef ALIBABACLOUD_CCC_MODEL_PREMODIFYMEDIARESULT_H_
#define ALIBABACLOUD_CCC_MODEL_PREMODIFYMEDIARESULT_H_

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
			class ALIBABACLOUD_CCC_EXPORT PreModifyMediaResult : public ServiceResult
			{
			public:
				struct PreModifyMediaParam
				{
					std::string ossFile;
					std::string ossBucket;
					std::string signatureUrl;
					std::string ossFilePath;
				};


				PreModifyMediaResult();
				explicit PreModifyMediaResult(const std::string &payload);
				~PreModifyMediaResult();
				std::string getMessage()const;
				PreModifyMediaParam getPreModifyMediaParam()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				PreModifyMediaParam preModifyMediaParam_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_PREMODIFYMEDIARESULT_H_