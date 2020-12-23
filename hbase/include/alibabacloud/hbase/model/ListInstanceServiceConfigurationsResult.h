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

#ifndef ALIBABACLOUD_HBASE_MODEL_LISTINSTANCESERVICECONFIGURATIONSRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_LISTINSTANCESERVICECONFIGURATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT ListInstanceServiceConfigurationsResult : public ServiceResult
			{
			public:
				struct Config
				{
					std::string valueRange;
					std::string defaultValue;
					std::string description;
					std::string configureUnit;
					std::string configureName;
					std::string needRestart;
					std::string runningValue;
				};


				ListInstanceServiceConfigurationsResult();
				explicit ListInstanceServiceConfigurationsResult(const std::string &payload);
				~ListInstanceServiceConfigurationsResult();
				long getTotalRecordCount()const;
				int getPageRecordCount()const;
				int getPageNumber()const;
				std::vector<Config> getConfigureList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<Config> configureList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_LISTINSTANCESERVICECONFIGURATIONSRESULT_H_