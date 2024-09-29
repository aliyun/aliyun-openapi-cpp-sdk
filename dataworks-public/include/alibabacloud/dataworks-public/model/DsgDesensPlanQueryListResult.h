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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DSGDESENSPLANQUERYLISTRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DSGDESENSPLANQUERYLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT DsgDesensPlanQueryListResult : public ServiceResult
			{
			public:
				struct PageData
				{
					struct Datas
					{
						struct DesensPlan
						{
							std::string desensPlanType;
							std::string extParam;
						};
						int status;
						std::string owner;
						std::string desenMode;
						bool checkWatermark;
						std::string sceneCode;
						std::string gmtModified;
						DesensPlan desensPlan;
						std::string gmtCreate;
						std::string sceneName;
						std::string dataType;
						std::string desensWay;
						long id;
						std::string desensRule;
						std::string ruleName;
					};
					int totalCount;
					int pageSize;
					int pageNumber;
					std::vector<Datas> data;
				};


				DsgDesensPlanQueryListResult();
				explicit DsgDesensPlanQueryListResult(const std::string &payload);
				~DsgDesensPlanQueryListResult();
				PageData getPageData()const;
				int getHttpStatusCode()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageData pageData_;
				int httpStatusCode_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_DSGDESENSPLANQUERYLISTRESULT_H_