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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEDATASOURCERESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEDATASOURCERESULT_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeDataSourceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct MetaDataField
					{
						struct _Operator
						{
							std::string description;
							std::string name;
						};
						std::string filedName;
						std::string filed;
						std::string valueType;
						std::string sample;
						std::vector<MetaDataField::_Operator> operatorList;
					};
					std::string description;
					std::vector<Data::MetaDataField> metaDataFields;
					std::string dataSourceName;
					std::string dateSourceName;
					int dataSourceId;
				};


				DescribeDataSourceResult();
				explicit DescribeDataSourceResult(const std::string &payload);
				~DescribeDataSourceResult();
				std::vector<Data> getMetaDatas()const;
				int getCount()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> metaDatas_;
				int count_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEDATASOURCERESULT_H_