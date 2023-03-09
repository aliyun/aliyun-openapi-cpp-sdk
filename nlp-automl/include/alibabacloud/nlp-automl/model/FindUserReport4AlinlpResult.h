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

#ifndef ALIBABACLOUD_NLP_AUTOML_MODEL_FINDUSERREPORT4ALINLPRESULT_H_
#define ALIBABACLOUD_NLP_AUTOML_MODEL_FINDUSERREPORT4ALINLPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nlp-automl/Nlp_automlExport.h>

namespace AlibabaCloud
{
	namespace Nlp_automl
	{
		namespace Model
		{
			class ALIBABACLOUD_NLP_AUTOML_EXPORT FindUserReport4AlinlpResult : public ServiceResult
			{
			public:
				struct Report
				{
					long totalCount;
					long failCount;
					int qpsMax;
					std::string rptTime;
					long successCount;
				};


				FindUserReport4AlinlpResult();
				explicit FindUserReport4AlinlpResult(const std::string &payload);
				~FindUserReport4AlinlpResult();
				std::vector<Report> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Report> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLP_AUTOML_MODEL_FINDUSERREPORT4ALINLPRESULT_H_